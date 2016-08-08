package jdbc;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

import beans.AdminBean;
import beans.UpdateAdminBean;

public class UpdateAdminDao {
	private Connection conn;
	private Statement st;
	private ResultSet rs;
	private PreparedStatement ps;
	private String sql;
	private UpdateAdminBean admin;
	
	public boolean UpadteAdmin(UpdateAdminBean admin){
		try {
			conn = JdbcConnectMysql.getConnection();
			ps = conn.prepareStatement("UPDATE admin SET Name=?,PASSWORD=?,Description=? WHERE NAME=?");
			ps.setString(1, admin.getAdminName());
			ps.setString(2, admin.getAdminPwd());
			ps.setString(3, admin.getAdminDes());
			ps.setString(4, admin.getUpdateAdminName());
			
			
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
		UpdateAdminDao a =new UpdateAdminDao();
		UpdateAdminBean p =new UpdateAdminBean();
		p.setAdminName("maling");
		p.setAdminPwd("maling");
		p.setAdminDes("boss");
		p.setUpdateAdminName("maling1");
		System.out.print(a.UpadteAdmin(p));
	}
	
}
