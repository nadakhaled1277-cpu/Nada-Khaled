public class AlertNotification implements Notification {
    private String id;
    private String userId;
    private String target;
    private String type;               // ALERT or PROMOTION
    private Integer priority;
    private String preferredChannel;
    public AlertNotification(String id, String userId, String target,String type, Integer priority , String preferredChannel) {
        this.id = id;
        this.userId = userId;
        this.target = target;
        this.type = type;
        this.priority = priority;
        this.preferredChannel = preferredChannel;
    }
    public String getId(){ return id; }
    public String getUserId() { return userId; }
    public String getTarget(){ return target; }
    public String getType(){ return type; }
    public Integer getPriority(){ return priority; }
    public String getPreferredChannel() { return preferredChannel; }

    public void validate() {
        if (priority == null) {
            throw new IllegalArgumentException("Alerts require priority");
        }
    }
}
