package servlet;

import java.io.IOException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import jdbc.AddPosterDao;
import beans.PosterBean;

/**
 * Servlet implementation class AddPosterServlet
 */
@WebServlet("/AddPosterServlet")
public class AddPosterServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public AddPosterServlet() {
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
			poster.setID(Integer.parseInt(request.getParameter("userid"))); 
			poster.setUserName(request.getParameter("username"));
			poster.setCompany(request.getParameter("usercompany"));
			poster.setPassword(request.getParameter("password"));
			
			
			AddPosterDao posterdao = new AddPosterDao();
					
			if(posterdao.InsertPoster(poster)){
				request.getSession().setAttribute("poster", poster);
				response.sendRedirect("../PosterManagement.jsp");
				//request.getRequestDispatcher("../PosterManagement.jsp").forward(request, response);	
			}
			else
			{
				request.getRequestDispatcher("../new-user.jsp").forward(request, response);
				
			}
			System.out.println(posterdao.InsertPoster(poster));
		}
		catch(Exception ex)
		{
			ex.printStackTrace();
		}
				
	}

}
