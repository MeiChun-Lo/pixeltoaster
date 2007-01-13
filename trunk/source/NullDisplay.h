// Null Display
// Copyright � 2004-2007 Glenn Fiedler
// Part of the PixelToaster Framebuffer Library - http://www.pixeltoaster.com

class NullDisplay : public DisplayAdapter
{
public:
	
	NullDisplay()
	{
		defaults();

		// ...
	}
	
	~NullDisplay()
	{
		// ...
	}

	bool open( const char title[], int width, int height, Output output, Mode mode )
	{
		DisplayAdapter::open( title, width, height, output, mode );
		
		// ...

		return true;
	}
	
	void close()
	{
		// ...

		DisplayAdapter::close();
	}

	bool update( const TrueColorPixel * integerPixels, const FloatingPointPixel * floatingPointPixels )
	{
		// ...

		return true;
	}

protected:

	void defaults()
	{
		// ...
	}

private:

	// ...
};
