package jdbc;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import beans.UserLoginBean;

public class UserLoginDao {
	public UserLoginBean login(UserLoginBean userbean){
		Connection conn =null;
		PreparedStatement ps =null;
		ResultSet rs =null;
		UserLoginBean ulb=null;
		try {
			conn = JdbcConnectMysql.getConnection();
			ps = conn.prepareStatement("select * from admin where Name=? and Password=?");
			ps.setString(1, userbean.getUserName());
			ps.setString(2, userbean.getUserPwd());
			rs = ps.executeQuery();
			if(rs.next()){
				ulb=new UserLoginBean(rs.getString("Name"), rs.getString("Password"));
				conn.close();
				return ulb;
			}else{
				return null;
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
			return null;
		}
	}

}
