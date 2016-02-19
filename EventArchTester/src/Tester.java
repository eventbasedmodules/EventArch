import org.eventreactor.core.compiler.EventArchCompiler;

public class Tester {

    public static void main(String[] args) {

        try {
            EventArchCompiler.CompileAppLevel("config=TestCentralized/configuration.xml");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
