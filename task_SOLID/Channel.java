public interface Channel {
    public String PreferredChannel();
    public void deliver(Notification notification);
}
