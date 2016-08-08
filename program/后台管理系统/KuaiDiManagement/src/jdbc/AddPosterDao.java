package jdbc;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.List;

import beans.PosterBean;
import beans.UserLoginBean;

public class AddPosterDao {
	private Connection conn;
	private Statement st;
	private ResultSet rs;
	private PreparedStatement ps;
	private String sql;
	private PosterBean poster;
	
	public boolean InsertPoster(PosterBean poster){
		
		
		try {
			
			conn = JdbcConnectMysql.getConnection();
			ps = conn.prepareStatement("INSERT INTO login VALUES(?,?,?,?)");
			ps.setString(1, String.valueOf(poster.getID()));
			ps.setString(2, poster.getUserName());
			ps.setString(3, poster.getPassword());
			ps.setString(4, poster.getCompany());
	
		    if(ps.executeUpdate()!=0){
		    	conn.close();
		    	return true;
		    }else
		    {
		    	return false;
		    }
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
			return false;
		}
	}
	
/*	public static void main(String[] args){
		AddPosterDao a =new AddPosterDao();
		PosterBean p =new PosterBean();
		p.setID(1234567);
		p.setUserName("12345");
		p.setPassword("1111111");
		p.setCompany("123456");
		System.out.print(a.InsertPoster(p));
	}*/

}
