using ObjectConsoleApp;

PointStruct firstpointSruct;
firstpointSruct.x = 6;
firstpointSruct.y = 7;

Console.WriteLine($"firstPointStruct({firstpointSruct.x} , {firstpointSruct.y})");

PointStruct secondPointStruct = firstpointSruct;
secondPointStruct.x = 7;

Console.WriteLine($"firstPointStruct({firstpointSruct.x} , {firstpointSruct.y})");
Console.WriteLine($"secondPointStruct({secondPointStruct.x} , {secondPointStruct.y})");

void ParametrTestStruct_v1(PointStruct ps)
{
    Console.WriteLine("firstPointStruct ({ps.x} , {ps.y})");
    ps.x = 99;
    Console.WriteLine("firstPointStruct ({ps.x} , {ps.y})");
}

void ParametrTestStruct_v2(ref PointStruct ps)
{
    Console.WriteLine("firstPointStruct ({ps.x} , {ps.y})");
    ps.x = 99;
    Console.WriteLine("firstPointStruct ({ps.x} , {ps.y})");
}

ParametrTestStruct_v1(firstpointSruct);
Console.WriteLine($"firstPointStruct ({firstpointSruct.x} , {firstpointSruct.y})");
ParametrTestStruct_v2(ref firstpointSruct);
Console.WriteLine($"firstPointStruct ({firstpointSruct.x} , {firstpointSruct.y})");

PointClass firstPointClass = new PointClass();
firstPointClass.x = 16;
firstPointClass.x = 17;
Console.WriteLine($"firstPointStruct ({firstpointSruct.x} , {firstpointSruct.y})");

PointClass secondPointClass = firstPointClass;
secondPointClass.x = 18;
Console.WriteLine($"firstPointStruct ({firstpointSruct.x} , {firstpointSruct.y})");
Console.WriteLine($"firstPointStruct ({secondPointClass.x} , {secondPointClass.y})");

void ParametrTestClass_v1(PointClass pc)
{
    Console.WriteLine($"ParametrTestClass_v1 ({pc.x} , {pc.y})");
    pc.x = 79;
    Console.WriteLine($"ParametrTestClass_v1 ({pc.x} , {pc.y})");
}

ParametrTestClass_v1(firstPointClass);
Console.WriteLine($"firstPointClass ({firstPointClass.x} , {firstPointClass.y})");

ParametrTestClass_v1(firstPointClass);
Console.WriteLine($"firstPointClass ({firstPointClass.x} , {firstPointClass.y})");