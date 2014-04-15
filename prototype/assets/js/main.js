/*
- http://www.mylvad.com/living-lvad/hospital-support-center
- http://pooliestudios.com/kontakt/
*/

$(function() {
	'use strict';
	
    var map;
    var mapMarkers = [];
    var closeupZoom = 6;

    var infoWindow = new google.maps.InfoWindow({
        //zIndex: 1,
        //maxWidth: 400
    });

    var mapStyle = [{
        stylers: [
            { hue: "#2DB5E2" },
            { saturation: -20 }
        ]
    },{
        featureType: "road",
        elementType: "geometry",
        stylers: [
            { lightness: 100 },
            { visibility: "simplified" }
        ]
    },{
        featureType: "road",
        elementType: "labels",
        stylers: [
            { visibility: "off"}
        ]
    }];
    var mapOptions = {
		zoom: 5,
		//maxZoom: 14,
		//minZoom:2,
		center: new google.maps.LatLng(52.3854489, 9.8025942),
        mapTypeId: google.maps.MapTypeId.ROADMAP,
		mapTypeControl: false,
		panControl: false,
		streetViewControl: false,
		zoomControlOptions: { position: google.maps.ControlPosition.LEFT_BOTTOM },
		panControlOptions: { position: google.maps.ControlPosition.LEFT_BOTTOM },
		styles: mapStyle
    };
    
    function init() {
        map = new google.maps.Map(document.getElementById('map'), mapOptions);
        setUserLocation();
        getLocations();

        //google.maps.event.addListener(map, 'center_changed', function(e) { console.log(map.getCenter(), map.getZoom()); });
    }
    
    // set user location
    function setUserLocation() {
        if (navigator.geolocation) {
            navigator.geolocation.getCurrentPosition(
                function(pos) {
                    var content = 'You are here!';
                    var position = new google.maps.LatLng(pos.coords.latitude, pos.coords.longitude);

                    var marker = new google.maps.Marker({
                        position: position,
                        map: map,
                        title: content,
                        animation: google.maps.Animation.DROP,
                        icon: new google.maps.MarkerImage(
                            'assets/img/user.png',
                            new google.maps.Size(26, 38),
                            new google.maps.Point(0, 0),
                            new google.maps.Point(13, 38))
                    });

                    map.panTo(position);
                    map.setZoom(closeupZoom);
                    infoWindow.setContent('<div class="infoWindow">' + content + '</div>');
                    infoWindow.open(map, marker);
                    
                    google.maps.event.addListener(marker, 'click', function() {
                        map.panTo(marker.getPosition());
                        map.setZoom(closeupZoom);
                        infoWindow.content = '<div class="infoWindow">' + content + '</div>';
                        infoWindow.open(map, marker);
                    });
    			}
    		);
        }
    }
    
    // get locations
    function getLocations() {
        $.ajax({
            url: 'data/data.txt',
            dataType: "json",
            success: function(data) {
                addLocations(data);
            }
        });
    }
    
    // add locations
    function addLocations(data) {
        var obj, i;
        
        for (i in data) {
            obj = data[i];
            var marker = new google.maps.Marker({
                position: new google.maps.LatLng(obj.lat, obj.lon),
                map: map,
                title: obj.title,
                animation: google.maps.Animation.DROP,
                //icon: 'assets/img/marker.png'
                icon: new google.maps.MarkerImage(
                    'assets/img/marker.png',
                    new google.maps.Size(26, 38),
                    new google.maps.Point(0, 0),
                    new google.maps.Point(13, 38))
            });
            mapMarkers.push(marker);
            
            (function(marker, i) {
                google.maps.event.addListener(marker, 'click', function() {
                    obj = data[i];
                    map.panTo(marker.getPosition());
                    map.setZoom(closeupZoom);
                    infoWindow.setContent('<div class="infoWindow">' + obj.content + '</div>');
                    infoWindow.open(map, marker);
                });
            })(marker, i);
        };
    }
    
    // init
    google.maps.event.addDomListener(window, 'load', init);
    
    
    /*
    // parse data
    function parseData() {
        $.ajax({
            url: 'data/data.html',
            //async: false,
            success: function(data) {
                //console.log(data);
                var $data = $('<div/>');
                var ra = data.split("||");
                $data.html(ra[1]);
                
                
                
                var json = [];
                $data.find("li").each(function() {
                    var $this = $(this);
                    var m = {
                        title: $this.attr("title"),
                        lat: $this.attr("lat"),
                        lon: $this.attr("lon"),
                        content: $this.html()
                    }
                    json.push(m);
                });
                
                var json = JSON.stringify(json);
                console.log(json);
            }
        });
    }
    parseData();
    */
});