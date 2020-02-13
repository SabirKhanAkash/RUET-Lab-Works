package myjava;

import java.io.Serializable;

public class ObjectClass implements Serializable {
	
	public static final long serialVersionUID = 42L;

		Integer header = null;
		String str =null;
		Integer protocol = null ;
		Integer tailer = null;
		
		public ObjectClass(Integer header1,String str1,Integer protocol1, Integer tailer1)
		{
			this.header = header1;
			this.str = str1;
			this.protocol = protocol1;
			this.tailer = tailer1;
		}

		public Integer getHeader()
		{
			return header;
		}
		public String getStr()
		{
			return str;
		}
		public Integer getProtocol()
		{
			return protocol;
		}
		public Integer getTailer()
		{
			return tailer;
		}

}
