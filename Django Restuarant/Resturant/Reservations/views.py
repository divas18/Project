from django.shortcuts import render
from .models import reservation

# Create your views here


def reservations(request):
    if request.method == "POST":
        res = request.POST.get("res", '')
        fname = request.POST.get("fname", '')
        lname = request.POST.get("lname", '')
        email = request.POST.get("email", '')
        country = request.POST.get("country", '')
        mbl = request.POST.get("mbl", '')
        tab = request.POST.get("tab", '')
        purpose = request.POST.get("purpose", '')
        meal = request.POST.get("meal", '')
        time = request.POST.get("time", '')
        date = request.POST.get("date", '')
        ref = reservation(title=res, First_name=fname, Last_nam=lname, email=email, country=country, contact_no=mbl,
                          table_type=tab, purpose=purpose, meal_type=meal, time=time, date=date)
        ref.save()
    return render(request, 'reservation.html', {"message": "Registered !"})
