package servlet;

import java.io.IOException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import jdbc.UpdateAdminDao;
import beans.AdminBean;
import beans.UpdateAdminBean;


/**
 * Servlet implementation class UpadateAdminServlet
 */
@WebServlet("/UpadateAdminServlet")
public class UpdateAdminServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public UpdateAdminServlet() {
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
			UpdateAdminBean admin = new UpdateAdminBean();
			admin.setAdminName(request.getParameter("name"));
			admin.setAdminPwd(request.getParameter("password"));
			admin.setAdminDes(request.getParameter("description"));
			admin.setUpdateAdminName(request.getParameter("loginname"));
			
						
			
			
			UpdateAdminDao AdminDao = new UpdateAdminDao();
					
			if(AdminDao.UpadteAdmin(admin)){
				request.getSession().setAttribute("admin", admin);
				response.sendRedirect("../AdminManagement.jsp");
				//request.getRequestDispatcher("../PosterManagement.jsp").forward(request, response);	
			}
			else
			{
				request.getRequestDispatcher("../MyAdminInfo.jsp").forward(request, response);
				
			}
			System.out.println(AdminDao.UpadteAdmin(admin));
		}
		catch(Exception ex)
		{
			ex.printStackTrace();
		}
	}

}
