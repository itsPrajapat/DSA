import java.io.IOException;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;

@WebServlet ("/loginServlet")
public class loginServlet extends HttpServlet {
private static final long serialVersionUID = 1L;
public loginServlet(){
    super();
}
protected void doPost (HttpServletRequest request, HttpServletResponse response)
throws ServletException, IOException {
    String user_id = request.getParameter("user_id");
    String user_password = request.getParameter("user_password");

    Connection con = null;
    String url = " jdbc:mysql://localhost:3306/loginSystem";

    String username = "login0043"; 
    String jdbcpassword = "login@123"; 
    Class.forName("com.mysql.jdbc.Driver");
    con = DriverManager.getConnection(url, username, jdbcpassword); 

    PreparedStatement st = con.prepareStatement("Select * from users WHERE username =? and password = ?)");
    st.setString (1, user_id);
    st.setString (2, user_password);
    ResultSet result = st.executeQuery();

    if(result.next()) {
        HttpSession httpSession = request.getSession();
        httpSession.setAttribute("userId", user_id);
        request.getRequestDispatcher("Home.jsp").forward(request, response);
    }
    else{
        request.getRequestDispatcher("Error.jsp").forward(request, response);
    }
}
}