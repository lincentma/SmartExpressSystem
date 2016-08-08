package beans;

import java.sql.Timestamp;

public class ReceiveBean {
	int ReceiveID;
	String Password = null;
	String Number = null;
	String Tel = null;
	String ReceiveStatus = null;
	Timestamp ReceiveTime;
	
	public ReceiveBean(){
		
	}
	
	public int getReceiveID(){
		return ReceiveID;
	}
	public void setReceiveID(int ReceiveID){
		this.ReceiveID = ReceiveID;
	}
	
	public String getPassword(){
		return Password;
	}
	public void setPassword(String Password){
		this.Password = Password;
	}
	
	public String getNumber(){
		return Number;
	}
	public void setNumber(String Number){
		this.Number = Number;
	}
	
	public String getTel(){
		return Tel;
	}
	public void setTel(String Tel){
		this.Tel = Tel;
	}
	
	public String getReceiveStatus(){
		return ReceiveStatus;
	}
	public void setReceiveStatus(String ReceiveStatus){
		this.ReceiveStatus = ReceiveStatus;
	}
	
	public Timestamp getReceiveTime(){
		return ReceiveTime;
	}
	public void setReceiveTime(Timestamp ReceiveTime){
		this.ReceiveTime = ReceiveTime;
	}

}
