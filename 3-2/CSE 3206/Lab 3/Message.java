import java.io.Serializable;

class ParityObject implements Serializable
{
	int header;
	String data;
	int protocol = 10;
	int tailer;

    ParityObject(int header,String data)
    {
        this.header = header;
        this.data = data;
    }

	void showDetails()
	{
		System.out.println("Header: "+header);
		System.out.println("Enter Data String: "+data);
		System.out.println("protocol: "+protocol);
		System.out.println("Tailer: "+tailer);
	}  
 }