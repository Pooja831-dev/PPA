import java.awt.*;
import java.awt.event.*;

class GUI2
{
      public static void main(String Arg[])
      {
           Frame fobj = new Frame("Marvellous PPA");
           fobj.setSize(400,400);
           fobj.setVisible(true);
            fobj.addWindowListener(new MarvellousListener());

      }
}
class MarvellousListener implements windowListener
{
    public void windowDeactivated(windowEvent fobj)
    {}
    public void windowActivated(windowEvent fobj)
    {}
    public void windowDiconified(windowEvent fobj)
    {}
    public void windowIconified(windowEvent fobj)
    {}
    public void windowClosed(windowEvent fobj)
    {}
    public void WindowClosing(windowEvent fobj)
    {
        System.exit(0);
    }
    public void windowOpened(windowEvent fobj)
    {}
    

    
}