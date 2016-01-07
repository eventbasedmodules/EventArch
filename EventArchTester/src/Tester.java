import org.eventreactor.core.compiler.EventReactorCompiler;
import org.eventreactor.core.elements.DataCatalogue;

public class Tester {

    public static void main(String[] args) {

        try {
            EventReactorCompiler.CompileAppLevel("config=TestCentralized/testerconfiguration.xml");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
