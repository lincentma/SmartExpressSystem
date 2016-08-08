package beans;

public class UserLoginBean {
	String userName = null;  
	String userPwd = null;  

	public UserLoginBean(String userName, String userPwd){
		super();
		this.userName = userName;
		this.userPwd = userPwd;
	}

	public String getUserName(){
		return userName;
	}
	public void setUserName(String userName) {  
		this.userName = userName;  
	} 
	public String getUserPwd() {  
		return userPwd;  
	}  
	public void setUserPwd(String userPwd) {  
		this.userPwd = userPwd;  
	}  

}
