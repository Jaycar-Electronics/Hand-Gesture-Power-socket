/**
 * For MS6149 and related power sockets.
 * ZW3100
 *
 */


class PowerSwitch {

  private:

  bool state;
  bool address;


  public:
  PowerSwitch();
  ~PowerSwitch();


  void on();
  void off();
  void toggle();

  bool getState();
  void setState(bool newState);



}