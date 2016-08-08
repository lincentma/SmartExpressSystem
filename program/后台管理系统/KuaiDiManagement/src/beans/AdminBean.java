package beans;

public class AdminBean {
	String AdminName = null;
	String AdminPwd = null;
	String AdminDes = null;

	public AdminBean(){
	}
	
	public String getAdminName(){
		return AdminName;
	}
	
	public void setAdminName(String AdminName){
		this.AdminName = AdminName;		
	}
	
	public String getAdminPwd(){
		return AdminPwd;
	}
	
	public void setAdminPwd(String AdminPwd){
		this.AdminPwd = AdminPwd;		
	}
	
	public String getAdminDes(){
		return AdminDes;
	}
	
	public void setAdminDes(String AdminDes){
		this.AdminDes = AdminDes;		
	}
}
