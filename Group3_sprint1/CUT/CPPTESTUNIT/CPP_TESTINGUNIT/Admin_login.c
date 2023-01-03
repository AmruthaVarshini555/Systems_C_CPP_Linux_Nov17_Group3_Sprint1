Admin_login(TestClassInit)
{
    std::string name = "quizgame";
    MyClass mc(name);
    Assert::AreEqual(name, mc.GetName());
}