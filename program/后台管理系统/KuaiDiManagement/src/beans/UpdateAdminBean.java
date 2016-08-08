package beans;

public class UpdateAdminBean {
	String AdminName = null;
	String AdminPwd = null;
	String AdminDes = null;
	String UpdateAdminName = null;

	public UpdateAdminBean(){
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
	
	public String getUpdateAdminName(){
		return UpdateAdminName;
	}
	
	public void setUpdateAdminName(String UpdateAdminName){
		this.UpdateAdminName = UpdateAdminName;		
	}

}
