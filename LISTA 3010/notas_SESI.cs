using System;

class Program
{
    static void Main()
    {
        double[] notas = new double[7];
        
        for(int i = 0; i < 7; i++)
        {
            Console.Write($"Digite a {i+1}ª nota: ");
            notas[i] = double.Parse(Console.ReadLine());
        }
        
        double primeiraMedia = (notas[0] + notas[1] + notas[2]) / 3.0;
        double segundaMedia = (notas[3] + notas[4] + notas[5]) / 3.0;
        double terceiraMedia = (primeiraMedia + segundaMedia + notas[6]) / 3.0;
        
        string conceito;
        if(terceiraMedia >= 80)
            conceito = "A";
        else if(terceiraMedia >= 60)
            conceito = "B";
        else
            conceito = "C";
        
        Console.WriteLine($"Nota final: {terceiraMedia:F1}");
        Console.WriteLine($"Conceito: {conceito}");
    }
}
