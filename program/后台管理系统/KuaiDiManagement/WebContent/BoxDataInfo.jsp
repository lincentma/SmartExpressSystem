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
              <li><a href="PostDataInfo.jsp">投递快递</a></li>
              <li><a href="ReceiveDataInfo.jsp">领取快递</a></li>
              <li class="active"><a href="BoxDataInfo.jsp">快递箱使用</a></li>
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
							快递箱数据分析 <small></small>
						</h1>
					</div>

					<table class="table table-striped table-bordered table-condensed">
						<thead>
							<tr>
								<th>箱号</th>
								<th>类型</th>
								<th>快递单号</th>
								<th>使用状态</th>
								<!-- <th></th> -->
							</tr>
						</thead>
						<tbody>
				<%
		        //驱动程序名   
 				Connection conn = JdbcConnectMysql.getConnection();
		        //表名   
		        String tableName = "box";    
		        Statement statement = conn.createStatement();  
		        String sql = "SELECT * FROM " + tableName;  
		        ResultSet rs = statement.executeQuery(sql); 
				%>
							<%  
				while (rs.next()) {
			    %>

							<tr class="list-users">
								<td><%=rs.getString(1)%></td>
								<td><%=rs.getString(2)%></td>
								<td><%=rs.getString(3)%></td>
								<td><%=rs.getString(4)%></td>
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
		String status = "using";
		int[] a = new int[3];
		int[] b = new int[3];
		int i = 0;
		sql = "SELECT TYPE,COUNT(*) FROM box GROUP BY TYPE";
		rs = statement.executeQuery(sql);
		while (rs.next()) {
			a[i] = rs.getInt(2);
			i++;
		}
		for (i = 0; i < 3; i++) {
			System.out.println(a[i]);
		}
		sql = "SELECT TYPE,COUNT(*) FROM " + tableName
				+ " WHERE BoxStatus = '" + status + "' GROUP BY TYPE";
		rs = statement.executeQuery(sql);
		i = 0;
		while (rs.next()) {
			b[i] = rs.getInt(2);
			i++;
		}
		for (i = 0; i < 3; i++) {
			System.out.println(b[i]);
		}
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
										type : 'column'
									},
									title : {
										text : '快递箱使用情况看数据柱形图表'
									},
									xAxis : {
										categories : [ '快递箱——大号', '快递箱——中号', '快递箱——小号' ]
									},
									yAxis : {
										min : 0,
										title : {
											text : '数量（个）'
										}
									},
									legend : {
										layout : 'vertical',
										backgroundColor : '#FFFFFF',
										align : 'left',
										verticalAlign : 'top',
										x : 100,
										y : 70,
										floating : true,
										shadow : true
									},
									tooltip : {
										formatter : function() {
											return '' + this.x + ': ' + this.y
													+ ' 单位';
										}
									},
									plotOptions : {
										column : {
											pointPadding : 0.2,
											borderWidth : 0
										}
									},
									series : [
											{
												name : '快递箱总数',
												data : [ <%=a[0]%>, <%=a[1]%>, <%=a[2]%>]

											},
											{
												name : '已使用数量',
												data : [ <%=b[0]%>, <%=b[1]%>, <%=b[2]%> ]

											} ]
								});
					});

		})(jQuery);
	</script>


</body>
</html>