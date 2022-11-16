def Merge( aList ):
    print( "Splitting ", aList )
    if len( aList ) > 1:
        mid = len( aList ) // 2
        lefthalf = aList[ :mid ]
        righthalf = aList[ mid :]

        Merge( lefthalf )
        Merge( righthalf )

        i = 0
        j = 0
        k = 0
        while i < len( lefthalf ) and j < len( righthalf ):
            if lefthalf[ i ] < righthalf[ j ]:
                aList[ k ] = lefthalf[ i ]
                i = i + 1
            else:
                aList[ k ] = righthalf[ j ]
                j = j + 1
            k = k + 1

        while i < len( lefthalf ):
            aList[ k ] = lefthalf[ i ]
            i = i + 1
            k = k + 1

        while j < len( righthalf ):
            aList[ k ] = righthalf[ j ]
            j = j + 1
            k = k + 1
    print( "Merging ", aList )

aList = [ 54, 26, 93, 17, 77, 31, 44, 55, 20 ]
Merge( aList )

print( aList )
