<%@ page language="java" import="java.util.*,servlet.*,beans.*,java.sql.*,jdbc.*"
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


	<%
		String temp1 = null;
		String temp2 = null;
		String temp3 = null;
		if (session.getAttribute("user") != null) {
			UserLoginBean login = (UserLoginBean) session.getAttribute("user");
			temp1 = login.getUserName();
			temp2 = login.getUserPwd();			
		}
        //驱动程序名   
        Connection conn = JdbcConnectMysql.getConnection();
        //表名   
        String tableName = "admin";  
        //姓名
        String adminname = temp1; 
        Statement statement = conn.createStatement();  
        String sql = "SELECT Description FROM " + tableName + " WHERE Name = '"+adminname+"'";  
        /* System.out.println(sql); */
        ResultSet rs = statement.executeQuery(sql); 
        while(rs.next()){
        	temp3 = rs.getString(1);
        }
        conn.close();
	%>

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
              <li class="active"><a href="MyAdminInfo.jsp">我的资料</a></li>
			  <li><a href="Search.jsp">查询快递</a></li>
			  <li><a href="index.jsp">退出</a></li> 
            </ul>
          </div>
        </div>
        <div class="span9">
		  <div class="row-fluid">
			<div class="page-header">
				<h1>我的资料 <small>更新信息</small></h1>
			</div>
			<form class="form-horizontal" action="servlet/UpdateAdminServlet" method="post">
				<fieldset>
					<div class="control-group">
						<label class="control-label" for="name">姓名</label>
						<div class="controls">
							<input type="text" class="input-xlarge" name="name" value=<%=temp1 %>> 
						</div>
					</div>
					<div class="control-group">
						<label class="control-label" for="email">新的密码</label>
						<div class="controls"> 
							<input type="text" class="input-xlarge" name="password" value=<%=temp2 %>> 
						</div>
					</div>
					<div class="control-group">
						<label class="control-label" for="city">描述</label>
						<div class="controls">
							<input type="text" class="input-xlarge" name="description" value=<%=temp3 %>>
						</div>				
					</div>	
					
					<div class="controls">
							<input type="text" class="input-xlarge" name="loginname" value=<%=temp1 %> style="display:none" readonly=true>
					</div>	
			
					<div class="form-actions">
						<input type="submit" class="btn btn-success btn-large" value="保存修改" /> <a class="btn" href="PosterManagement.jsp">取消</a>
					</div>					
				</fieldset>
			</form>
		  </div>
        </div>
      </div>

      <hr>

      <footer class="well">
        &copy; 智能快递箱后台管理系统  V1.0
      </footer>

    </div>

    <script src="js/jquery.js"></script>
	<script src="js/bootstrap.min.js"></script>

</body>
</html>