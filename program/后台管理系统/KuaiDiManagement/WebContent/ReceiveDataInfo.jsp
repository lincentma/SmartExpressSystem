<%@ page language="java" import="java.sql.*,java.util.*,java.math.*,jdbc.*"
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
              <li><a href="PostDataInfo.jsp">投递快递</a></li>
              <li class="active"><a href="ReceiveDataInfo.jsp">领取快递</a></li>
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
							领取快递数据分析 <small></small>
						</h1>
					</div>

					<table class="table table-striped table-bordered table-condensed">
						<thead>
							<tr>
								<th>ID</th>
								<th>快递单号</th>
								<th>领取密码</th>
								<th>用户电话</th>
								<th>领取状态</th>
								<th>领取时间</th>
								<!-- <th></th> -->
							</tr>
						</thead>
						<tbody>
							<%
		        //驱动程序名   
		        Connection conn = JdbcConnectMysql.getConnection(); 
		        //表名   
		        String tableName = "receive";   
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
								<td><%=rs.getString("Password")%></td>
								<td><%=rs.getString("Tel")%></td>
								<td><%=rs.getString("ReceiveStatus")%></td>
								<td><%=rs.getString("ReceiveTime")%></td>
								<!-- 					<td>
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

					<div style="margin: 0 1em">
						<div id="container"
							style="min-width: 400px; height: 400px; margin: 0 auto"></div>
					</div>
				</div>
				
				<br />
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
	int num =0;
	int numyes =0;
	int numno =0;
	double numyes1 = 0.0000;
	double numno1 = 0.0000;
	String status = "success";
	tableName = "receive";
	sql = "SELECT COUNT(*) FROM " + tableName;  
    rs = statement.executeQuery(sql);
    if(rs.next()) num = rs.getInt(1);
    /* System.out.println(num); */
    sql = "SELECT COUNT(*) FROM " + tableName + " WHERE ReceiveStatus = '"+status+"'";  
    rs = statement.executeQuery(sql);
    if(rs.next()) numyes = rs.getInt(1);
    /* System.out.println(numyes); */
    numno =num - numyes;
/*     numyes1 = (double)numyes/(double)num;
    BigDecimal b = new BigDecimal(numyes1);
    numyes1 = b.setScale(4,BigDecimal.ROUND_HALF_UP).doubleValue();  
    numyes1 = numyes1 * 100;
    numno1 = 1-numyes1; */
    conn.close();
	%>
	
	<script type="text/javascript" src="highcharts/jquery.js"></script>
	<script src="highcharts/highcharts.js"></script>
	<script type="text/javascript">
		(function($) { // encapsulate jQuery
			var chart;
			$(document).ready(
					function() {
						chart = new Highcharts.Chart(
								{
									chart : {
										renderTo : 'container',
										plotBackgroundColor : null,
										plotBorderWidth : null,
										plotShadow : false
									},
									title : {
										text : '快递领取饼状图表'
									},
									tooltip : {
										formatter : function() {
											return '<b>'
													+ this.point.name
													+ '</b>: '
													+ this.percentage
															.toFixed(2) + ' %';
										}
									},
									plotOptions : {
										pie : {
											allowPointSelect : true,
											cursor : 'pointer',
											dataLabels : {
												enabled : true,
												color : '#000000',
												connectorColor : '#000000',
												formatter : function() {
													return '<b>'
															+ this.point.name
															+ '</b>: '
															+ this.percentage
																	.toFixed(2)
															+ ' %';
												}
											}
										}
									},
									series : [ {
										type : 'pie',
										name : 'pie',
										data : [ [ '已领取快递', <%=numyes%>],
												 {
													name : '未领取快递',
													y : <%=numno%>,
													sliced : true,
													selected : true
												}]
									} ]
								});
					});
		})(jQuery);
	</script>
	

</body>
</html>