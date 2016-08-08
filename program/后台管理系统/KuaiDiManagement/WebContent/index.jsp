<%@ page language="java" import="java.util.*"
	contentType="text/html; charset=utf-8" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<meta name="viewport"
	content="width=device-width, initial-scale=1, maximum-scale=1" />
<title>智能快递箱后台管理系统</title>

<link rel="stylesheet" href="css/base.css">
<link rel="stylesheet" href="css/skeleton.css">
<link rel="stylesheet" href="css/layout.css">

</head>
<body>
	<!-- Primary Page Layout -->

	<div class="notice">
		<p class="warn">智能快递箱后台管理系统</p>
	</div>


	<div class="container">

		<div class="form-bg">
			<form action="./servlet/LoginServlet" method="post">
				<input type="text" placeholder="Username" name="userName" id="userName">
				<br>
				<input type="password" placeholder="Password" name="userPwd" id="userPwd">
				<br>
				<input type="text" placeholder="Place" name="Place" id="Place">
				<br>
				<input type="text" placeholder="IPaddress" name="IP" id="IP">
				<br>
				<button type="submit"></button>
			</form>
		</div>
		<%
			String errorInfo = (String) request.getAttribute("error"); // 获取错误属性
			if (errorInfo != null) {
		%>
		<script type="text/javascript" language="javascript">
		alert("<%=errorInfo%>");
		// 弹出错误信息
			window.location = 'index.jsp'; // 跳转到登录界面
		</script>
		<%
			}
		%>



	</div>


	<script src="jquery-easyui-1.4.2/jquery.min.js"></script>
	<script src="jquery-easyui-1.4.2/app.js"></script>
</body>
</html>