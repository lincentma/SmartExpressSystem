package jdbc;


import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;



public class JdbcConnectMysql {
	public static final String url = "jdbc:mysql://127.0.0.1:3306/kuaidisystem";
	public static final String user = "root";
	public static final String password = "maling";
	public static final String driver = "com.mysql.jdbc.Driver";
	
	//SQLite ����
	public static final String Sqlitedriver = "org.sqlite.JDBC";
	
	public static String place = "chengdu";
	public static String IP = "192.168.1.100";


	//�������ݿ�����
	public static Connection conn = null;
	public static PreparedStatement  ps = null;
	//���������
	public static ResultSet rs;
	//�������ݿ���ʽ
	public static Statement st;


	public static Connection getConnection(){
		try {
			Class.forName(Sqlitedriver);
//			conn = DriverManager.getConnection(url, user, password);
//			conn = DriverManager.getConnection(
//					"jdbc:mysql://127.0.0.1:3306/kuaidisystem?user=root&password=maling&useUnicode=true&characterEncoding=utf-8");
			
			String databasename = place +".db";
			String filename = "//"+IP+"/kuaidisystem"+"/database/";
			System.out.println(filename);
			//\\192.168.1.100\kuadisystem\database
			filename += databasename;
			conn = DriverManager.getConnection("jdbc:sqlite:"+filename);
			//db�ļ���Eclipse�İ�װĿ¼�ĸ�Ŀ¼��
			
			
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
			System.out.println("�޷��������ݿ�"); 
		}

		return conn;

	}	

//	//ִ�����ݿ��ѯ�����ز�ѯ���  
//	public static ResultSet query(String sql){  
//		try{  
//			conn = getConnection();  
//			st = conn.createStatement();  
//			rs = st.executeQuery(sql);  
//		}catch(Exception ex){  
//			ex.printStackTrace();  
//		}  
//		return rs;  
//	} 
//
//	//ִ�����ݿ����  
//	public static void update(String sql){  
//		try{  
//			conn = getConnection();  
//			st = conn.createStatement();  
//			st.executeUpdate(sql);  
//		}catch(Exception ex){  
//			ex.printStackTrace();  
//		}  
//	}  
//
//	//ִ�����ݿ����  
//	public static void update(String sql,String[] args){  
//		try{  
//			conn = getConnection();  
//			ps = conn.prepareStatement(sql);  
//			for (int i=0;i<args.length;i++){  
//				ps.setString(i+1,args[i]);  
//			}  
//			ps.executeUpdate();  
//		}catch(Exception ex){  
//			ex.printStackTrace();  
//		}  
//	} 
//
//	//�ر����ݿ�����
//	public static void close(){
//		try {
//			if (rs != null)rs.close();  
//			if (st != null)st.close();  
//			if (ps != null)ps.close();  
//			if (conn != null)conn.close();
//		} catch (SQLException e) {
//			// TODO Auto-generated catch block
//			e.printStackTrace();
//		}
//
//	}
//	
//	public static void main(String[] args) {
//		if(getConnection()!=null){
//			System.out.println("success");
//		}
//	}
}
