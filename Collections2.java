import java.util.*;

class Collections2
{
    public static void main(Strig Arg[])
    {

        HashTable <String, Integer> hobj = new HashTable<String , Integer>();

        hobj.put("PPA",19500);
        hobj.put("LB",19700);
        hobj.put("Angular",19000);
        hobj.put("Python",20000);

        System.out.println(hobj.get("Python"));

        Enumeration eobj = hobj.keys();

        while(eobj.hashMoreElements());
        {
            System.out.println()
        }

    }
}