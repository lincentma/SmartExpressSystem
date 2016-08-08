package servlet;

import java.io.IOException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import jdbc.AddAdminDao;
import beans.AdminBean;



/**
 * Servlet implementation class AddAdminServlet
 */
@WebServlet("/AddAdminServlet")
public class AddAdminServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public AddAdminServlet() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doPost(request,response);
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		
		try{
			response.setContentType("text/html");  
			request.setCharacterEncoding("utf-8");  
			response.setCharacterEncoding("utf-8"); 
			AdminBean admin = new AdminBean();
			admin.setAdminName(request.getParameter("rolename"));
			admin.setAdminPwd(request.getParameter("password"));
			admin.setAdminDes(request.getParameter("description"));
			
			
			AddAdminDao AdminDao = new AddAdminDao();
					
			if(AdminDao.InsertAdmin(admin)){
				request.getSession().setAttribute("admin", admin);
				response.sendRedirect("../AdminManagement.jsp");
				//request.getRequestDispatcher("../PosterManagement.jsp").forward(request, response);	
			}
			else
			{
				request.getRequestDispatcher("../new-admin.jsp").forward(request, response);
				
			}
		}
		catch(Exception ex)
		{
			ex.printStackTrace();
		}
	}

}
