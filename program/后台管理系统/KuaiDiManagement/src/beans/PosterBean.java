package beans;

public class PosterBean {
	int ID;
	String Username = null;
	String Password = null;
	String Company = null;
	
	public PosterBean(){
		
	}
	
	public int getID(){
		return ID;
	}

	public void setID(int ID){
		this.ID = ID;		
	}
	
	public String getUserName(){
		return Username;
	}

	public void setUserName(String Username){
		this.Username = Username;		
	}
	
	public String getPassword(){
		return Password;
	}

	public void setPassword(String Password){
		this.Password = Password;		
	}
	
	public String getCompany(){
		return Company;
	}

	public void setCompany(String Company){
		this.Company = Company;		
	}
	
}
