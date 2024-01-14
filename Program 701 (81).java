
package Marvellous2;

public class Arithematic2
{
    public float CalPercentage(int iMarks , int iToatal)
    {
        float fAns = 0.0f;
          
        if((iMarks < 0 ) || (iToatal < 0) || (iMarks > iToatal))
        {
            System.out.println("Invalide Input ");

        }
        fAns = (((float)iMarks / (float) iToatal) * 100);

        return fAns;

    }
}