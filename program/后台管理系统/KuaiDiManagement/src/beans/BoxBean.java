package beans;

public class BoxBean {
	int BoxID;
	String Type = null;
	String PostID = null;
	String BoxStatus = null;
	
	public BoxBean(){
		
	}
	
	public int getBoxID(){
		return BoxID;
	}
	public void setBoxId(int BoxID){
		this.BoxID = BoxID;
	}
	
	public String getType(){
		return Type;
	}
	public void setType(String Type){
		this.Type = Type;
	}
	
	public String getPostID(){
		return PostID;
	}
	public void setPostID(String PostID){
		this.PostID = PostID;
	}
	
	public String getBoxStatus(){
		return BoxStatus;
	}
	public void setBoxStatus(String BoxStatus){
		this.BoxStatus = BoxStatus;
	}

}
