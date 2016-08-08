package servlet;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import beans.UserLoginBean;
import jdbc.UserLoginDao;
import jdbc.JdbcConnectMysql;

public class LoginServlet extends HttpServlet {
	public  boolean isBlank(String str) {  
		return str == null || str.trim().length() == 0;  
	}  

	public void doGet(HttpServletRequest request, HttpServletResponse response)  
			throws ServletException, IOException {  
		doPost(request, response);  
	}

	public void doPost(HttpServletRequest request, HttpServletResponse response)  
			throws ServletException, IOException {  
		response.setContentType("text/html");  
		request.setCharacterEncoding("utf-8");  
		response.setCharacterEncoding("utf-8");  
		String userName = request.getParameter("userName");  
		String userPwd = request.getParameter("userPwd"); 
		String Place = request.getParameter("Place");
		String IP = request.getParameter("IP");
		JdbcConnectMysql.place = Place;		
		JdbcConnectMysql.IP = IP;
		System.out.println(userName);  
		System.out.println(userPwd);  

		if(isBlank(userName)&&(isBlank(userPwd))){  
			response.setCharacterEncoding("utf-8");
			PrintWriter out = response.getWriter();
			out.print("<script>alert('姓名和密码不可为空！'); window.location='../index.jsp' </script>");
			out.flush();
			out.close();  
		} else{
			UserLoginBean ulb=new UserLoginDao().login(new UserLoginBean(userName, userPwd));
			if(ulb!=null){
				request.getSession().setAttribute("user", ulb);
				response.sendRedirect("../main.jsp");
			}else{
				response.setCharacterEncoding("utf-8");
				PrintWriter out = response.getWriter();
				out.print("<script>alert('姓名和密碼错误！'); window.location='../index.jsp' </script>");
				out.flush();
				out.close();
			}
		}

	}  

}
