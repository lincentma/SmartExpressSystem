package servlet;

import java.io.IOException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import jdbc.DeleteInfoDao;
import jdbc.UpdateAdminDao;
import beans.AdminBean;
import beans.UpdateAdminBean;

/**
 * Servlet implementation class DeleteAdminServlet
 */
@WebServlet("/DeleteAdminServlet")
public class DeleteAdminServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public DeleteAdminServlet() {
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
			admin.setAdminName(request.getParameter("deletename"));
			
			System.out.println(request.getParameter("deletename"));
			
			DeleteInfoDao AdminDao = new DeleteInfoDao();
					
			if(AdminDao.DeleteAdmin(admin)){
				response.sendRedirect("../AdminManagement.jsp");
				//request.getRequestDispatcher("../PosterManagement.jsp").forward(request, response);	
			}
			else
			{
				request.getRequestDispatcher("../main.jsp").forward(request, response);
				
			}
		}
		catch(Exception ex)
		{
			ex.printStackTrace();
		}
		
		
	}

}
