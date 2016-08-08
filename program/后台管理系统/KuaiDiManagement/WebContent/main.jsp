<%@ page language="java" import="java.util.*,beans.*"
	contentType="text/html; charset=utf-8" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html lang="UTF-8">
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
						<li><a href="BoxDataInfo.jsp">快递箱使用</a></li>
						<li class="nav-header"><i class="icon-user"></i> 管理配置</li>
						<li><a href="MyAdminInfo.jsp">我的资料</a></li>
						<li><a href="Search.jsp">查询快递</a></li>
						<li><a href="index.jsp">退出</a></li>
					</ul>
				</div>
			</div>

			<%
				String temp1 = null;
				if (session.getAttribute("user") != null) {
					UserLoginBean login = (UserLoginBean) session
							.getAttribute("user");
					temp1 = login.getUserName();

				}
			%>

			<div class="span9">
				<div class="row-fluid">
					<div class="page-header">
						<h1>
							欢迎您<%=temp1%>！ <small>智能快递箱后台管理系统</small>
						</h1>
					</div>
					<h3>
					本系统功能：<br>
					提供智能快递箱系统人员管理<br>
					提供快递投递数据统计<br>
					提供快递领取数据统计<br>
					提供快递箱使用统计<br>
					提供快递物流信息查询<br>
					</h3>
				</div>
			</div>
		</div>

		<hr>

		<footer class="well">
			&copy; 智能快递箱后台管理系统 V1.0<a target="_blank"></a>
		</footer>

	</div>

	<script src="js/jquery.js"></script>
	<script src="js/jquery.flot.js"></script>
	<script src="js/jquery.flot.resize.js"></script>	
	<script src="js/bootstrap.min.js"></script>
  </body>
</html>

