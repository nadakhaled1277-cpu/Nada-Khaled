public class EmailChannel implements Channel {
    private final EmailService emailservice;
    public EmailChannel(EmailService emailservice) {
        this.emailservice = emailservice;
    }
    public String PreferredChannel() { return "Email"; }
    public void deliver(Notification notification){
        emailservice.send(notification.getTarget(),"[EMAIL] Notification " + notification.getId());
    }
}
