<%@ page language="java" import="java.sql.*,java.util.*,jdbc.*"
	contentType="text/html; charset=utf-8" pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
    <meta charset="UTF-8">  
	<title>智能快递箱后台管理系统</title>	
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link href="css/bootstrap.css" rel="stylesheet">
	<link href="css/site.css" rel="stylesheet">
    <link href="css/bootstrap-responsive.css" rel="stylesheet">

</head>
<body>
    <div class="navbar navbar-fixed-top">
      <div class="navbar-inner">
        <div class="container-fluid">
          <a class="btn btn-navbar" data-toggle="collapse" data-target=".nav-collapse">
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
          </a>
          <a class="brand" href="#">Welcome</a>
          <div class="btn-group pull-right">
			<a class="btn" href="my-profile.html"><i class="icon-user"></i> 用户菜单</a>
            <a class="btn dropdown-toggle" data-toggle="dropdown" href="#">
              <span class="caret"></span>
            </a>
            <ul class="dropdown-menu">
			  <li><a href="MyAdminInfo.jsp">个人资料</a></li>
              <li class="divider"></li>
              <li><a href="index.jsp">退出</a></li>
            </ul>
          </div>
          <div class="nav-collapse">
            <ul class="nav">
			<li><a href="main.jsp">首页</a></li>
              <li class="dropdown"><a href="#" class="dropdown-toggle" data-toggle="dropdown">用户 <b class="caret"></b></a>
				<ul class="dropdown-menu">
					<li><a href="new-user.jsp">新建用户</a></li>
					<li class="divider"></li>
					<li><a href="PosterManagement.jsp">管理用户</a></li>
				</ul>
			  </li>
              <li class="dropdown"><a href="#" class="dropdown-toggle" data-toggle="dropdown">管理 <b class="caret"></b></a>
				<ul class="dropdown-menu">
					<li><a href="new-admin.jsp">新建管理角色</a></li>
					<li class="divider"></li>
					<li><a href="AdminManagement.jsp">管理人员</a></li>
				</ul>
			  </li>
			  <li><a href="PostDataInfo.jsp">统计</a></li>
            </ul>
          </div>
        </div>
      </div>
    </div>

    <div class="container-fluid">
      <div class="row-fluid">
        <div class="span3">
          <div class="well sidebar-nav">
            <ul class="nav nav-list">
              <li class="nav-header"><i class="icon-wrench"></i>管理菜单</li>
              <li><a href="PosterManagement.jsp">用户</a></li>
              <li><a href="AdminManagement.jsp">管理人员</a></li>
              <li class="nav-header"><i class="icon-signal"></i> 统计信息</li>
              <li class="active"><a href="PostDataInfo.jsp">投递快递</a></li>
              <li><a href="ReceiveDataInfo.jsp">领取快递</a></li>
              <li><a href="BoxDataInfo.jsp">快递箱使用</a></li>
              <li class="nav-header"><i class="icon-user"></i> 管理配置</li>
              <li><a href="MyAdminInfo.jsp">我的资料</a></li>
			  <li><a href="Search.jsp">查询快递</a></li>
			  <li><a href="index.jsp">退出</a></li> 
            </ul>
          </div>
        </div>
        
        <div class="span9">
				<div class="row-fluid">
					<div class="page-header">
						<h1>
							投递快递数据分析 <small></small>
						</h1>
					</div>
					<table class="table table-striped table-bordered table-condensed">
						<thead>
							<tr>
								<th>序号</th>
								<th>快递单号</th>
								<th>用户电话</th>
								<th>投递人员ID</th>
								<th>投递时间</th>
								<th>投递箱号</th>
								<th>投递状态</th>
								<!-- <th></th> -->
							</tr>
						</thead>
						<tbody>
							<%
		        //驱动程序名   
		        Connection conn = JdbcConnectMysql.getConnection();  
		        //表名   
		        String tableName = "post";  
		        Statement statement = conn.createStatement();  
		        String sql = "SELECT * FROM " + tableName;  
		        ResultSet rs = statement.executeQuery(sql); 
				%>
				<%  
				int temp = 0;
				while (rs.next()) {
					
			    %>

							<tr class="list-users">
								<td><%=temp+=1%></td>
								<td><%=rs.getString("Number")%></td>
								<td><%=rs.getString("Tel")%></td>
								<td><%=rs.getString("UserID")%></td>
								<td><%=rs.getString("PostTime")%></td>
								<td><%=rs.getString("PostBox")%></td>
								<td><%=rs.getString("PostStatus")%></td>
								<!-- <td>
						<div class="btn-group">
							<a class="btn btn-mini dropdown-toggle" data-toggle="dropdown" href="#">Actions <span class="caret"></span></a>
							<ul class="dropdown-menu">
								<li><a href="#"><i class="icon-pencil"></i> Edit</a></li>
								<li><a href="#"><i class="icon-trash"></i> Delete</a></li>
							</ul>
						</div>
					</td> -->
							</tr>

							<%
				}
				%>
						</tbody>
					</table>
					<div class="pagination">
						<ul>
							<li><a href="#">Prev</a></li>
							<li class="active"><a href="#">1</a></li>
							<li><a href="#">2</a></li>
							<li><a href="#">3</a></li>
							<li><a href="#">4</a></li>
							<li><a href="#">Next</a></li>
						</ul>
					</div>
					<div style="margin: 0 2em">
						<div id="container"
							style="min-width: 400px; height: 400px; margin: 0 auto"></div>
					</div>
				</div>

				<!-- <div id="placeholder" style="width:80%;height:300px;"></div> -->
				<br/>
		  </div>
        </div>
      </div>

      <hr>

      <footer class="well">
        &copy; 智能快递箱后台管理系统  V1.0<a target="_blank"></a>
      </footer>

    </div>

	<script src="js/jquery.js"></script>
	<script src="js/jquery.flot.js"></script>
	<script src="js/jquery.flot.resize.js"></script>	
	<script src="js/bootstrap.min.js"></script>


	<%
		int IDnum = 0;
			List<String> list = new ArrayList<String>();
			List<String> list2 = new ArrayList<String>();
			
			sql = "SELECT COUNT(*) as Number FROM login";  
		    rs = statement.executeQuery(sql);
		    while(rs.next()){
		    	IDnum = rs.getInt("Number");
		    }
		    int[][] b =new int[IDnum][12];
		    System.out.println(IDnum);
		    
		    sql = "SELECT UserName FROM login";  
		    rs = statement.executeQuery(sql);
		    while(rs.next()){
		    	list.add(rs.getString("UserName"));
		    }

		    /* System.out.println(IDnum); */
		    //Mysql
		    //sql = "SELECT UserID,DATE_FORMAT(PostTime,'%m'),COUNT(Number)  FROM post GROUP BY DATE_FORMAT(PostTime,'%m')"; 
		    //SQLite
		    sql = "SELECT UserID,strftime('%m',PostTime) as Date,COUNT(Number) as Count FROM post GROUP BY strftime('%m',PostTime),UserID";
		    rs = statement.executeQuery(sql);
	 	    while(rs.next()){
	 	    	for(int i=0;i<list.size();i++){
		    		if(rs.getString("UserID").equals(list.get(i))){
		    			for(int j =1;j<13;j++){
		    				if(rs.getInt("Date")==j)
		    				{
		    					b[i][j-1]=rs.getInt("Count");
		    				}
		    			}
		    		}    		
		    	}	    	 	    		    		    	
		    } 

		//SELECT UserID,DATE_FORMAT(PostTime,'%m'),COUNT(Number)  FROM post GROUP BY DATE_FORMAT(PostTime,'%m')
		conn.close();
	%>
	<script type="text/javascript" src="highcharts/jquery.js"></script>
	<script src="highcharts/highcharts.js"></script>
	<script type="text/javascript">
		(function($) { // encapsulate jQuery
			var chart;
			$(document).ready(
					function() {
						chart = new Highcharts.Chart({
							chart : {
								renderTo : 'container',
								type : 'line',
								marginRight : 220,
								marginBottom : 25
							},
							title : {
								text : '投递快递数据曲线图表',
								x : -20
							//center
							},
							xAxis : {
								categories : [ '1月', '2月', '3月', '4月',
										'5月', '6月', '7月', '8月', '9月',
										'10月', '11月', '12月' ]
							},
							yAxis : {
								title : {
									text : '数据'
								},
								plotLines : [ {
									value : 0,
									width : 2,
									color : '#808080'
								} ]
							},
							tooltip : {
								formatter : function() {
									return '<b>' + this.series.name
											+ '</b><br/><br/>' + this.x + ': '
											+ this.y + '单位';
								}
							},
							legend : {
								layout : 'vertical',
								align : 'right',
								verticalAlign : 'top',
								x : -20,
								y : 200,
								borderWidth : 0
							},
							series : [
							  <%
							  for(int i=0;i<IDnum-1;i++){
								  %>
								  {
										name : '<%=list.get(i)%>',
										data : [ <%=b[i][0]%>, <%=b[i][1]%>, <%=b[i][2]%>, <%=b[i][3]%>, <%=b[i][4]%>, <%=b[i][5]%>, <%=b[i][6]%>, <%=b[i][7]%>, <%=b[i][8]%>, <%=b[i][9]%>, <%=b[i][10]%>, <%=b[i][11]%> ]
									},
						      <%
							  }
							  %>
									{
										name : '<%=list.get(IDnum-1)%>',
										data : [ <%=b[IDnum-1][0]%>, <%=b[IDnum-1][1]%>, <%=b[IDnum-1][2]%>, <%=b[IDnum-1][3]%>, <%=b[IDnum-1][4]%>, <%=b[IDnum-1][5]%>, <%=b[IDnum-1][6]%>, <%=b[IDnum-1][7]%>, <%=b[IDnum-1][8]%>, <%=b[IDnum-1][9]%>, <%=b[IDnum-1][10]%>, <%=b[IDnum-1][11]%> ]
									} ]
						});
					});
		})(jQuery);
	</script>



</body>
</html>