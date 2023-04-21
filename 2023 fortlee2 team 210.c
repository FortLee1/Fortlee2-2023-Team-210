int main()
{
    int const CLAW = 1;
    int const LARM = 0;
    int const SARM = 2;
   
    printf("Aurello\n");
    printf("Morello\n");
   
    //----code
    create_connect();
    enable_servos();
   
    set_servo_position(CLAW,0);
    set_servo_position(SARM,1950);
    msleep(1000);
    set_servo_position(LARM,1950);
msleep(2000);
   
    create_drive_direct(500,500);
    msleep(2500);
    create_stop();
    set_create_total_angle(0);
    while (get_create_total_angle() < 85)
    {
    create_drive_direct(-100, 100);
    }
    create_stop();
   
    set_servo_position(LARM,825);
   
    msleep(1000);
   
    while ((get_create_lbump() == 0) && (get_create_rbump() == 0))
    {
create_drive_direct(100, 100);

    }
    create_stop();
    msleep(1000);
    set_servo_position(CLAW,500);
    msleep(1000);
    set_servo_position(SARM,1300);
    msleep(2000);
    set_servo_position(CLAW,1700);
    msleep(3000);
    set_servo_position(LARM,600);
    msleep(2000);
    create_drive_direct(-200, -200);
    msleep(3000);
    create_stop();
    
    return 0;
}
