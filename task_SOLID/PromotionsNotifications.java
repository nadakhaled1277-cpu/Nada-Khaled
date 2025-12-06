import java.time.LocalDate;
public class PromotionsNotifications implements{
    private String id;
    private String userId;
    private String target;
    private String type;               // ALERT or PROMOTION
    private LocalDate expiryDate;      // Only for PROMOTION
    private String preferredChannel;   // EMAIL or SLACK

    public PromotionsNotifications(String id, String userId, String target,String type,LocalDate expiryDate, String preferredChannel) {
        this.id = id;
        this.userId = userId;
        this.target = target;
        this.type = type;
        this.expiryDate = expiryDate;
        this.preferredChannel = preferredChannel;
    }
    public String getId(){ return id; }
    public String getUserId() { return userId; }
    public String getTarget(){ return target; }
    public String getType(){ return type; }
    public LocalDate getExpiryDate() { return expiryDate; }
    public String getPreferredChannel() { return preferredChannel; }

    public void validate() {
        if (expiryDate == null) {
            throw new IllegalArgumentException("Promotions require expiry date");
        }
    }

}
