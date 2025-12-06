import java.time.LocalDate;

public interface Notification {
    public String getId(); //{ return id; }
    public String getUserId(); // { return userId; }
    public String getTarget(); //{ return target; }
    public String getType(); //{ return type; }
    public void validate();
}
