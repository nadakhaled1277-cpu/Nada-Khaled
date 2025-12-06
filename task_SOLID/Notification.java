import java.time.LocalDate;

public interface Notification {
    public String getId(); 
    public String getUserId(); 
    public String getTarget(); 
    public String getType();
    public String getPreferredChannel();
    public void validate();
}
