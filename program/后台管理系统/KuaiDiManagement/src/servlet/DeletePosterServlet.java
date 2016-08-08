package servlet;

import java.io.IOException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import jdbc.DeleteInfoDao;
import beans.AdminBean;
import beans.PosterBean;

/**
 * Servlet implementation class DeletePosterServlet
 */
@WebServlet("/DeletePosterServlet")
public class DeletePosterServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public DeletePosterServlet() {
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
			PosterBean poster = new PosterBean();
			poster.setID(Integer.parseInt(request.getParameter("deleteid"))); 
			System.out.println(request.getParameter("deletename"));
			
			DeleteInfoDao AdminDao = new DeleteInfoDao();
					
			if(AdminDao.DeletePoster(poster)){
				response.sendRedirect("../PosterManagement.jsp");
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
