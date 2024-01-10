
import java.io.*;

class WriteFile
{

    public static void main(String arg[])// throws Exception
    {
    try
    {
        String Data = "Marvellous InfoSystem";
        byte Arr[] = Data.getBytes();

        FileOutputStream fobj = new FileOutputStream("PPA.text");
            fobj.write(Arr);
    }
       catch(Exception obj)
      {
          
      }

    }
}
