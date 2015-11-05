import org.eventreactor.core.compiler.EventReactorCompiler;
import org.eventreactor.core.elements.DataCatalogue;

public class Tester {

    public static void main(String[] args) {

        try {
            EventReactorCompiler.CompileAppLevel("config=testerconfiguration.xml");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}

//c:/aspectj1.8/bin/ajc -XX:-UseSplitVerifier -source 1.7 -target 1.7 -cp ../lib/Dummy/* -inpath ../application/EventReactorTester.jar -outjar EventReactorTester.jar WrappedDummyIWrappedDummyGlobalInterface.aj WrappedDummyIWrappedDummyLocalInterface.aj