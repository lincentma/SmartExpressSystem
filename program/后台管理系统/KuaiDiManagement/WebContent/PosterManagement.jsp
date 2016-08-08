<%@ page language="java" import="java.sql.*,java.util.*,jdbc.*"
	contentType="text/html; charset=utf-8" pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta charset="utf-8">
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
              <li class="active"><a href="PosterManagement.jsp">用户</a></li>
              <li><a href="AdminManagement.jsp">管理人员</a></li>
              <li class="nav-header"><i class="icon-signal"></i> 统计信息</li>
              <li><a href="PostDataInfo.jsp">投递快递</a></li>
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
							系统用户 <small>所有用户</small>
						</h1>
					</div>
					<table class="table table-striped table-bordered table-condensed">
						<thead>
							<tr>
								<th>ID</th>
								<th>用户ID</th>
								<th>用户名称</th>
								<th>用户密码</th>
								<th>用户公司</th>
								<th></th>
							</tr>
						</thead>
						<tbody>
							<%
		        //驱动程序名   
		        Connection conn = JdbcConnectMysql.getConnection();  
				//表名   
		        String tableName = "login";   
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
								<td><%=rs.getInt(1)%></td>
								<td><%=rs.getString(2)%></td>
								<td><%=rs.getString(3)%></td>
								<td><%=rs.getString(4)%></td>
								<td>
									<div class="btn-group">
										<a class="btn btn-mini dropdown-toggle" data-toggle="dropdown"
											href="#">Actions <span class="caret"></span></a>
										<ul class="dropdown-menu">
										<form name="DeletePoster" action="servlet/DeletePosterServlet" method="post">	
											<!-- <li><a href="#"><i class="icon-pencil"></i> Edit</a></li>
											<li><a href="#"><i class="icon-trash"></i> Delete</a></li> -->
											<li><input type="submit" class="btn btn-success" value="             Delete             "></li>
								            <li><input type="text" class="input-xlarge" name="deleteid" value=<%=rs.getString(1)%> style="display:none;" readonly=true></li>
										</form>
										</ul>
									</div>
								</td>
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
					<a href="new-user.jsp" class="btn btn-success">新建用户</a>
				<br />
				<br />
				</div>
				<br />
				<div id="visits" style="width: 80%; height: 300px;"></div>

			</div>
        </div>
      </div>

		<hr>

      <footer class="well">
        &copy; 智能快递箱后台管理系统  V1.0
      </footer>

    </div>

    <script src="js/jquery.js"></script>
	<script src="js/jquery.flot.js"></script>
	<script src="js/jquery.flot.resize.js"></script>	
	<script src="js/bootstrap.min.js"></script>
	<%
	int Company[] = new int[6];
	statement = conn.createStatement();  
    sql = "SELECT Company,COUNT(Company) FROM login GROUP BY Company ";  
    rs = statement.executeQuery(sql);
    while(rs.next()){
    	if("EMS".equals(rs.getString(1)))Company[0] = rs.getInt(2);
    	if("顺丰".equals(rs.getString(1)))Company[1] = rs.getInt(2);
    	if("申通".equals(rs.getString(1)))Company[2] = rs.getInt(2);
    	if("圆通".equals(rs.getString(1)))Company[3] = rs.getInt(2);
    	if("韵达".equals(rs.getString(1)))Company[4] = rs.getInt(2);
    	if("中通".equals(rs.getString(1)))Company[5] = rs.getInt(2);
    }
    for(int i=0;i<6;i++){
    	System.out.print(Company[i]);
    }
	conn.close();
    %>
	<script type="text/javascript">
	$(function () {
		var number = new Array(6);
		number[0] = <%=Company[0]%>;
		number[1] = <%=Company[1]%>;
		number[2] = <%=Company[2]%>;
		number[3] = <%=Company[3]%>;
		number[4] = <%=Company[4]%>;
		number[5] = <%=Company[5]%>;
		var dataVisits = [
		{
			label: '用户公司',
			data: [[0, number[0]], [1, number[1]], [2, number[2]], [3, number[3]], [4, number[4]], [5, number[5]]]
		}];
		var optionsVisits = {
			legend: {
				show: true,
				margin: 10,
				backgroundOpacity: 0.5
			},
			bars: {
				show: true,
				barWidth: 0.5,
				align: 'center'
			},
			grid: {
				borderWidth:1,
				hoverable: true
			},
			xaxis: {
				axisLabel: '快递公司',
				ticks: [[0, 'EMS'], [1, '顺丰'], [2, '申通'], [3, '韵达'], [4, '圆通'], [5, '中通']],
				tickDecimals: 0
			},
			yaxis: {
				tickSize:10,
				tickDecimals: 0
			}
		};
		function showTooltip(x, y, contents) {
			$('<div id="tooltip">' + contents + '</div>').css( {
				position: 'absolute',
				display: 'none',
				top: y + 5,
				left: x + 5,
				border: '1px solid #D6E9C6',
				padding: '2px',
				'background-color': '#DFF0D8',
				opacity: 0.80
			}).appendTo("body").fadeIn(200);
		}
		var previousPoint = null;
		$("#placeholder, #visits").bind("plothover", function (event, pos, item) {
			if (item) {
				if (previousPoint != item.dataIndex) {
					previousPoint = item.dataIndex;

					$("#tooltip").remove();
					showTooltip(item.pageX, item.pageY, item.series.label + ": " + item.datapoint[1]);
				}
			}
			else {
				$("#tooltip").remove();
				previousPoint = null;            
			}
		});
		$.plot( $("#visits") , dataVisits, optionsVisits );
	});
	</script>
	
	
</body>
</html>