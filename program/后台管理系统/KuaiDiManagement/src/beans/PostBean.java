package beans;

import java.sql.Timestamp;

public class PostBean {
	int PostID;
	String Number = null;
	String Tel = null;
	String UserID = null;
	String PostStatus = null;
	String PostBox = null;
	Timestamp PostTime;
	
	public PostBean(){
		
	}
	
	public int getPostID(){
		return PostID;
	}
	public void setPostID(int PostID){
		this.PostID = PostID;
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
	
	public String getUserID(){
		return UserID;
	}
	public void setUserID(String UserID){
		this.UserID = UserID;
	}
	
	public String getPostStatus(){
		return PostStatus;
	}
	public void setPostStatus(String PostStatus){
		this.PostStatus = PostStatus;
	}
	
	public String getPostBox(){
		return PostBox;
	}
	public void setPostBox(String PostBox){
		this.PostBox = PostBox;
	}
	
	public Timestamp getPostTime(){
		return PostTime;
	}
	public void setPostTime(Timestamp PostTime){
		this.PostTime = PostTime;
	}
}
