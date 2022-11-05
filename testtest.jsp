<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=ISO-8859-1">
<title>Login Page</title>
</head>
<body>
    <h1>Login Page</h1>
    <form action="loginServlet" method="post">
        <table style="width: 50%">
            <tr>
                <td>User Id : </td>
                <td><input type="text" name="user_id" /></td>
            </tr>
            <tr>
                <td>Password : </td>
                <td><input type="password" name="user_password" /></td>
            </tr>
        </table>
        <input type="submit" value="Submit" />
    </form>
</body>
</html>