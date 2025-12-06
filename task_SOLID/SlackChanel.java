public class SlackChanel implements Channel {
    private final SlackService slackservice;
    public SlackChanel(SlackService slackservice) {
        this.slackservice = slackservice;
    }
    public String PreferredChannel() { return "Slack"; }
    public void deliver(Notification notification){
        slackservice.send(notification.getTarget(),"[SLACK] Notification " + notification.getId());
    }
}