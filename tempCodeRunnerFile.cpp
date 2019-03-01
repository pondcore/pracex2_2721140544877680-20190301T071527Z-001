		if(x[i] < x[i+1] and x[i] > x[i-1])
		{
			dest << x[i] << "=" << i+1 << "\n";
		}else
		{
			dest << x[i] << "=" << i+1-j << "\n";
			j++;
		}
		
		i++;