package jdbc;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

import beans.AdminBean;
import beans.PosterBean;

public class DeleteInfoDao {
	private Connection conn;
	private Statement st;
	private ResultSet rs;
	private PreparedStatement ps;
	private String sql;
	
	private AdminBean admin;
	private PosterBean poster;
	
	public boolean DeleteAdmin(AdminBean admin){
		try {
			conn = JdbcConnectMysql.getConnection();
			ps = conn.prepareStatement("DELETE FROM admin WHERE Name=?");
			ps.setString(1, admin.getAdminName());
			
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
	
	public boolean DeletePoster(PosterBean poster){
		try {
			conn = JdbcConnectMysql.getConnection();
			ps = conn.prepareStatement("DELETE FROM login WHERE ID=?");
			ps.setInt(1, poster.getID());
			
			if(ps.executeUpdate()!=0){
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
	
	public static void main(String[] args){
		DeleteInfoDao a =new DeleteInfoDao();
		PosterBean p =new PosterBean();
		p.setID(28004);
		System.out.print(a.DeletePoster(p));
	}
}
