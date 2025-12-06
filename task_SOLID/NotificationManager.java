public class NotificationManager {

    private final UserRepository userRepository;

    public NotificationManager(UserRepository userRepository) {
        this.userRepository = userRepository;
    }

    public void process(Notification notification) {
        notification.validate();
            if (userRepository.getLocation(notification.getUserId()).equals("EU")) {
                System.out.println("Filtered PROMOTION for EU user");
                return;
            }
        }
    }

