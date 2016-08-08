package jdbc;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

import beans.AdminBean;

public class AddAdminDao {
	private Connection conn;
	private Statement st;
	private ResultSet rs;
	private PreparedStatement ps;
	private String sql;
	private AdminBean admin;
	
	public boolean InsertAdmin(AdminBean admin){
		
		try {
			conn = JdbcConnectMysql.getConnection();
			ps = conn.prepareStatement("INSERT INTO admin VALUES(?,?,?)");
			ps.setString(1, admin.getAdminName());
			ps.setString(2, admin.getAdminPwd());
			ps.setString(3, admin.getAdminDes());
			
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
	
	public static void main(String[] args){
		AddAdminDao a =new AddAdminDao();
		AdminBean p =new AdminBean();
		p.setAdminName("1234");
		p.setAdminPwd("123");
		p.setAdminDes("111");
		System.out.print(a.InsertAdmin(p));
	}
	

}
